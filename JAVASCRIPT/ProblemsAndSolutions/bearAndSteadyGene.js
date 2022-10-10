const is_ok = (freq, n) => {
  if (freq['A'] > n / 4) {
    return false;
  }
  if (freq['C'] > n / 4) {
    return false;
  }
  if (freq['T'] > n / 4) {
    return false;
  }
  if (freq['G'] > n / 4) {
    return false;
  }
  return true;
}

const steadyGene = (gene) => {
  let freq = {},
    n = gene.length,
    ans = n,
    j = 0;

  for (let i = 0; i < n; i++) {
    if (!freq[gene[i]]) freq[gene[i]] = 1;
    else freq[gene[i]]++;
  }

  if (is_ok(freq, n)) {
    console.log(0);
    return 0;
  }

  for (let i = 0; i < n; i++) {
    while (j < n && !is_ok(freq, n)) --freq[gene[j++]];
    if (is_ok(freq, n)) ans = Math.min(ans, j - i);
    ++freq[gene[i]];
  }
  return ans;
}
