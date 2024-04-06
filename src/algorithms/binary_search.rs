use crate::utils::middle_between;


pub fn execute(vector: &Vec<u32>, find: u32) -> (usize, u32, u32) {

  // Search range start index
  let mut min: u32 = 0;

  // Middle index between min and max
  let mut mid: usize = 0;

  // Search range final index
  let mut max: u32 = vector.len() as u32;

  // Stores the number of times the algorithm had to recalculate
  // the range and try to find the index of the number sought
  let mut rounds: u32 = 0;

  while rounds < (vector.len() as u32) {
    rounds += 1;

    if min == max {
      return (mid, rounds, vector[min as usize])
    }

    if vector[mid] == find {
      return (mid, rounds, vector[mid])
    }

    if vector[mid] < find {
      min = (mid as u32) + 1;
    }
    else {
      max = (mid as u32) - 1;
    }

    mid = middle_between(min, max);
  }

  (mid, rounds, vector[mid])
}
