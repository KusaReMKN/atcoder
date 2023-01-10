fn main() {
    let mut line = String::new();
    std::io::stdin().read_line(&mut line).ok();
    let mut iter = line.split_whitespace();
    let n: i32 = iter.next().unwrap().parse().unwrap();
    let x: i32 = iter.next().unwrap().parse().unwrap();
    let y: i32 = iter.next().unwrap().parse().unwrap();
    let sum = n / x + n / y - n / num::integer::lcm(x, y);
    println!("{}", sum);
}
