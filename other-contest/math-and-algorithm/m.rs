fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).ok();
    let n = n.trim().parse::<i64>().unwrap();

    let mut i = 1;
    while i*i <= n {
        if n % i == 0 {
            println!("{}", i);
            if n/i != i {
                println!("{}", n/i);
            }
        }
        i += 1;
    }
}
