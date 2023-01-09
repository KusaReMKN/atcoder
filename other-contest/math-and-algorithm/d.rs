fn main() {
    let mut a = String::new();
    std::io::stdin().read_line(&mut a).ok();
    let a: Vec<i32> = a.split_whitespace()
        .map(|e| e.parse().unwrap()).collect();

    let product: i32 = a.iter().product();
    println!("{}", product);
}
