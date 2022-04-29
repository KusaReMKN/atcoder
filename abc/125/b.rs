fn main() {
    let mut n = String::new();
    std::io::stdin().read_line(&mut n).expect("");
    let n: usize = n.trim().parse().expect("");

    let mut v = String::new();
    std::io::stdin().read_line(&mut v).expect("");
    let v = v.split_whitespace().fold(Vec::new(), |mut s, i| {
        s.push(i.to_string());
        s
    });

    let mut c = String::new();
    std::io::stdin().read_line(&mut c).expect("");
    let c = c.split_whitespace().fold(Vec::new(), |mut s, i| {
        s.push(i.to_string());
        s
    });

    let mut sum = 0;
    for i in 0..n {
        let vn: isize = v[i].parse().expect("");
        let cn: isize = c[i].parse().expect("");
        if vn - cn > 0 {
            sum += vn - cn;
        }
    }
    println!("{}", sum);
}
