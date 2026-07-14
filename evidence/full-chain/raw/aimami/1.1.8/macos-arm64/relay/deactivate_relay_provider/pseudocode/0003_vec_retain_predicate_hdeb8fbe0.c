// alloc::vec::Vec<T,A>::retain::hdeb8fbe0d48f8862
addr: 0x1006f3140
role: struct-field predicate loop that removes the RelayProvider entry matching the deactivation target's id (memcmp against provider.id bytes)
terminated_reason: data_structure_leaf (pure Vec compaction + memcmp + rust_dealloc, no further app logic)
0-truncation full decompile
// --- refs ---
// ref: 0x1011309fc _memcmp
// ref: 0x100001440 __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// --- decompiled pseudocode (反编译器 Hex-Rays, x86_64 slice) ---

void __fastcall alloc::vec::Vec$LT$T$C$A$GT$::retain::hdeb8fbe0d48f8862(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  size_t v3; // r15
  _QWORD *v4; // rbx
  __int64 v5; // r13
  const void *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  const void *v11; // r14
  __int64 v12; // [rsp+8h] [rbp-48h]
  void *__s2; // [rsp+18h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 16); /*0x1006f3155*/
  if ( v2 ) /*0x1006f315c*/
  {
    __s2 = *(void **)a2; /*0x1006f316d*/
    v3 = *(_QWORD *)(a2 + 8); /*0x1006f3171*/
    v12 = *(_QWORD *)(a1 + 8); /*0x1006f317d*/
    v4 = (_QWORD *)(v12 + 24); /*0x1006f3181*/
    v5 = 0; /*0x1006f3185*/
    while ( 1 ) /*0x1006f31a0*/
    {
      if ( *(v4 - 1) == v3 ) /*0x1006f31a4*/
      {
        v6 = (const void *)*(v4 - 2); /*0x1006f31a6*/
        if ( !memcmp(v6, __s2, v3) ) /*0x1006f31b4*/
          break; /*0x1006f31b4*/
      }
      ++v5; /*0x1006f3190*/
      v4 += 3; /*0x1006f3193*/
      if ( v2 == v5 ) /*0x1006f319a*/
        return; /*0x1006f319a*/
    }
    v7 = *(v4 - 3); /*0x1006f31bd*/
    if ( v7 ) /*0x1006f31c4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v7, 1); /*0x1006f31ce*/
    if ( v5 + 1 < v2 ) /*0x1006f31da*/
    {
      v8 = v2 - 1 - v5; /*0x1006f31e0*/
      do /*0x1006f3211*/
      {
        if ( v4[2] == v3 && (v11 = (const void *)v4[1], !memcmp(v11, __s2, v3)) ) /*0x1006f3227*/
        {
          if ( *v4 ) /*0x1006f3230*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, *v4, 1); /*0x1006f3240*/
        }
        else
        {
          v9 = 3 * v5; /*0x1006f31e5*/
          *(_QWORD *)(v12 + 8 * v9 + 16) = v4[2]; /*0x1006f31f2*/
          v10 = *v4; /*0x1006f31f7*/
          *(_QWORD *)(v12 + 8 * v9 + 8) = v4[1]; /*0x1006f31fe*/
          *(_QWORD *)(v12 + 8 * v9) = v10; /*0x1006f3203*/
          ++v5; /*0x1006f3207*/
        }
        v4 += 3; /*0x1006f320a*/
        --v8; /*0x1006f320e*/
      }
      while ( v8 ); /*0x1006f3211*/
    }
    *(_QWORD *)(a1 + 16) = v5; /*0x1006f324b*/
  }
}
