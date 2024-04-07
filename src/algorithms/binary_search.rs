use crate::utils::middle_between;



pub fn execute(vector: &Vec<u32>, find: u32) -> (usize, u32, u32) {

  let mut min: u32 = 0;
  let mut mid: usize = 0;
  let mut max: u32 = vector.len() as u32;
  let mut rounds: u32 = 0;

  while rounds < (vector.len() as u32) {

    if min == max {
      return if vector[min as usize] == find {
        (mid, rounds, vector[min as usize])
      }
      else {
        (mid, rounds, 0)
      }
    }

    if vector[mid] == find {
      return (mid, rounds, vector[mid]);
    }

    if vector[mid] < find {
      min = (mid as u32) + 1;
    }
    else {
      max = (mid as u32) - 1;
    }

    mid = middle_between(min, max);
    rounds += 1;
  }

  (0, 0, 0)
}
