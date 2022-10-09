// Copy range removing values
template <class InputIterator, class OutputIterator, class UnaryPredicate>
  OutputIterator remove_copy_if (InputIterator first, InputIterator last,
                                 OutputIterator result, UnaryPredicate pred)
{
  while (first!=last) {
    if (!pred(*first)) {
      *result = *first;
      ++result;
    }
    ++first;
  }
  return result;
}
