use std::io::{self, BufRead};

fn main() {

    let stdin = io::stdin();
    let mut iterator = stdin.lock().lines();

    let n: i32 = iterator.next().unwrap().unwrap().parse().unwrap();
    let beverage = iterator.next().unwrap().unwrap();

    for i in (1..n + 1).rev() {
        if i > 2 {
            println!("{0} bottles of {1} on the wall, {0} bottles of {1}.", i, beverage);
            println!("Take one down, pass it around, {} bottles of {} on the wall.\n", i - 1, beverage);
        }
        else if i == 2 {
            println!("{0} bottles of {1} on the wall, {0} bottles of {1}.", i, beverage);
            println!("Take one down, pass it around, {} bottle of {} on the wall.\n", i - 1, beverage);
        }
        else {
            println!("{0} bottle of {1} on the wall, {0} bottle of {1}.", i, beverage);
            println!("Take it down, pass it around, no more bottles of {}.", beverage);
        }
    }
}
