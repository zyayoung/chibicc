int data[] = {6, 1, 20, 3, 9, 5, 89, 33, 78, 3, 89, 23};
int t[12] = {0};

void sort(int *l_ptr, int size) {
  if (size <= 1) return;
  int l_size = size / 2;
  int r_size = size - l_size;
  int *m_ptr = l_ptr + l_size;
  sort(l_ptr, l_size);
  sort(m_ptr, r_size);
  for (int i = 0, j = 0, k = 0; k != size; k++) {
    if (i == l_size)
      t[k] = m_ptr[j++];
    else if (j == r_size)
      t[k] = l_ptr[i++];
    else
      t[k] = l_ptr[i] < m_ptr[j] ? l_ptr[i++] : m_ptr[j++];
  }
  for (int k = 0; k != size; k++) l_ptr[k] = t[k];
}

int main(void) {
  sort(data, 12);
  return data;
}
