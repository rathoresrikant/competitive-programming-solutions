# Sum of Odd Elements
# problem link = https://www.hackerrank.com/challenges/fp-sum-of-odd-elements/problem

defmodule Implementation do
    def while(r) do
        n = IO.gets("")
        if n == :eof do
            IO.puts r
            "exit"
        else
            n = String.trim_trailing(n) |> String.to_integer
            
            if rem(n,2) == 0 do
                while(r)
            else
                while(r + n)
            end
        end
    end
end

defmodule Solution do
    Implementation.while(0)
end