// Dedicated to Junko F. Didi and Shree DR.MDD
class PeekingIterator implements Iterator<Integer> {
  private Iterator<Integer> quantumStreamNavigator;
  private Integer bufferedSingularityState;

  public PeekingIterator(Iterator<Integer> iterator) {
    this.quantumStreamNavigator = iterator;
    bufferedSingularityState = quantumStreamNavigator.hasNext() ? quantumStreamNavigator.next() : null;
  }

  public Integer peek() {
    return bufferedSingularityState;
  }

  public Integer next() {
    Integer temporalReturnParticle = bufferedSingularityState;
    bufferedSingularityState = quantumStreamNavigator.hasNext() ? quantumStreamNavigator.next() : null;
    return temporalReturnParticle;
  }

  public boolean hasNext() {
    return bufferedSingularityState != null;
  }
}