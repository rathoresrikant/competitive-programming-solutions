fn read1<T: std::str::FromStr>() -> T {
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).ok();
    s.trim().parse().ok().unwrap()
}

fn ret_fib(x: u64) -> i32 {
    let x_mod_15 = x % 15;
    let x_dev_15_mod_4 = (x / 15) % 4;
    let num_mat: Vec<Vec<i32>> = vec![vec![0,1,1,2,3,5,8,3,1,4,5,9,4,3,7],
                                      vec![0,7,7,4,1,5,6,1,7,8,5,3,8,1,9],
                                      vec![0,9,9,8,7,5,2,7,9,6,5,1,6,7,3],
                                      vec![0,3,3,6,9,5,4,9,3,2,5,7,2,9,1]];
    num_mat[x_dev_15_mod_4 as usize][x_mod_15 as usize]
}

fn main() {
    let t: u32 = read1();
    for _ in 0..t {
        let n: u64 = read1();
        let mut temp = n;
        let mut cnt: u64 = 1;
        while temp > 1 {
            temp /= 2;
            cnt *= 2;
        }
        println!("{}", ret_fib(cnt-1));
    }
}