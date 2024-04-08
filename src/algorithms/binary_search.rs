


pub fn execute(vector: &Vec<u32>, find: u32) -> (usize, u32, u32) {

  let mut min: u32 = 0;
  let mut max: u32 = (vector.len() - 1) as u32;
  let mut rounds: u32 = 0;

  while min <= max {
    let mid = f64::from((min + max) / 2).floor() as usize;

    if vector[mid] == find {
      return (mid, rounds, vector[mid]);
    }

    if vector[mid] < find {
      min = (mid as u32) + 1;
    }
    else {
      max = (mid as u32) - 1;
    }

    rounds += 1;
  }

  (0, 0, 0)
}
