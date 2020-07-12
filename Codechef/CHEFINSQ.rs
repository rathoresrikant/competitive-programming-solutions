fn read1<T: std::str::FromStr>() -> T {
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).ok();
    s.trim().parse().ok().unwrap()
}

fn readn<T: std::str::FromStr>(delimiter: &str) -> Vec<T> {
    let s = read1::<String>();
    s.split(delimiter).map(|e| e.parse().ok().unwrap()).collect::<Vec<T>>()
}

fn gcd(x: u64, y: u64) -> u64 {
    let mut a;
    let mut b;
    if x > y {
        a = x;
        b = y;
    } else {
        a = y;
        b = x;
    }
    while b > 0 {
        let temp = b;
        b = a % b;
        a = temp;
    }
    a
}

fn main() {
    let t: i32 = read1();
    for _ in 0..t {
        let kn: Vec<u64> = readn(" ");
        let k = kn[1];
        let mut a: Vec<u64> = readn(" ");
        a.sort();
        let a_end: u64 = a[(k-1) as usize];
        let num_a_head: u64 = a.iter().take_while(|x| **x < a_end).count() as u64;
        let num_a_end: u64 = a.iter().skip_while(|x| **x < a_end).take_while(|x| **x == a_end).count() as u64;
        let mut numerator: u64 = 1;
        let mut denominator: u64 = 1;
        let numerator_start: u64 = num_a_end+num_a_head-k+1;
        let mut denominator_end: u64 = k-num_a_head;
        if numerator_start < denominator_end {
            denominator_end = numerator_start-1;
        }
        for i in 0..denominator_end {
            numerator *= num_a_end - i;
            denominator *= denominator_end - i;
            let g = gcd(numerator, denominator);
            numerator /= g;
            denominator /= g;
        }
        println!("{}", numerator);
    }
}
