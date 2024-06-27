fn main() {
    let mut q = String::new();
    std::io::stdin().read_line(&mut q).ok();
    let q = q.trim().parse::<i32>().unwrap();

    for i in 0..q {
        let mut x = String::new();
        std::io::stdin().read_line(&mut x).ok();
        let x = x.trim().parse::<u32>().unwrap();

        let mut j = 2;
        let mut isPrime = true;
        while j*j <= x {
            if x % j == 0 {
                isPrime = false;
                break;
            }
            j += 1;
        }
        println!("{}", if isPrime { "Yes" } else { "No" });
    }
}
