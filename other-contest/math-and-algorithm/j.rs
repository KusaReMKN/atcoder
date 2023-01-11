fn frac(n: i64) -> i64 {
    if n == 1 { 1 } else { n * frac(n-1) }
}

fn main() {
    let mut line = String::new();
    std::io::stdin().read_line(&mut line).ok();
    let n = line.trim().parse::<i64>().unwrap();
    println!("{}", frac(n));
}
