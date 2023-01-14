fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).ok();
    let n = n.trim().parse::<i64>().unwrap();

    let mut isPrime = true;
    let mut i = 2;
    while i*i <= n {
        if n % i == 0 {
            isPrime = false;
            break;
        }
        i += 1;
    }
    println!("{}", if isPrime { "Yes" } else { "No" });
}
