fn main() {
    let mut line = String::new();
    std::io::stdin().read_line(&mut line).ok();
    let a: Vec<i32> = line.split_whitespace()
        .map(|e| e.parse().unwrap()).collect();
    let sum: i32 = a.iter().sum();
    println!("{}", sum);
}
