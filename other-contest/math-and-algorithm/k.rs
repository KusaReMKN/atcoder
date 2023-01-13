fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).ok();
    let n = n.trim().parse::<i32>().unwrap();
    let mut prime: Vec<i32> = Vec::new();

    for i in 2..n+1 {
        let mut isPrime = true;
        for p in &prime {
            if i % p == 0 {
                isPrime = false;
                break
            }
        }
        if isPrime {
            if i != 2 {
                print!(" ");
            }
            prime.push(i);
            print!("{}", i);
        }
    }
    println!("");
}
