use std::io;

fn main() {

    let mut line = String::new();

    io::stdin().read_line(&mut line).unwrap();

    let inputs: Vec<&str> = line.split_whitespace().collect();

    let a_reversed: String = inputs[0].chars().rev().collect();
    let b_reversed: String = inputs[1].chars().rev().collect();

    let a_reversed: i32 = a_reversed.parse().unwrap();
    let b_reversed: i32 = b_reversed.parse().unwrap();

    println!("{}", if a_reversed > b_reversed { a_reversed } else { b_reversed });
}
