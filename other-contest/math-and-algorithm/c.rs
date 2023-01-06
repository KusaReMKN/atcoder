fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).ok();
    let n: i32 = n.trim().parse().unwrap();

    let mut a = String::new();
    std::io::stdin().read_line(&mut a).ok();
    let a: Vec<i32> = a.split_whitespace()
        .map(|e| e.parse().unwrap()).collect();

    let sum: i32 = a.iter().sum();
    println!("{}", sum);
}
