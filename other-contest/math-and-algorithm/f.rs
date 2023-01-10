fn main() {
    let mut line = String::new();
    std::io::stdin().read_line(&mut line).ok();
    let n: i32 = line.trim().parse().unwrap();
    println!("{}", 2*n + 3);
}
