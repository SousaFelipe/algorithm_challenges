

pub struct Range {
  pub min: u8,
  pub max: u8
}


impl Range {
  
  pub fn new(min: u8, max: u8) -> Range {
    Range {
      min,
      max
    }
  }

  pub fn with_min(&self, min: u8) -> Range {
    Range {
      min,
      max: self.max
    }
  }

  pub fn with_max(&self, max: u8) -> Range {
    Range {
      min: self.min,
      max
    }
  }
}
