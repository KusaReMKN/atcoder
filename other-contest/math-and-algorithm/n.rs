fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).ok();
    let mut n = n.trim().parse::<i64>().unwrap();
    let mut i: i64 = 2;

    while i*i <= n {
        while n % i == 0 {
            print!("{} ", i);
            n /= i;
        }
        i += 1;
    }
    if n != 1 {
        println!("{}", n);
    } else {
        println!("");
    }
}
