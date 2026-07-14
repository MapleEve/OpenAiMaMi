// mac 1.1.8 test_relay_provider_stream node va=0x1002aed30 depth=5
// _::drop
__int64 __fastcall _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h5cdbf4a7d0eeb8cf(
        unsigned __int64 *a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r13
  __int64 result; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // rdi
  unsigned __int64 i; // r13
  unsigned __int64 v12; // rdi
  unsigned __int64 j; // rbx

  v1 = a1[3]; /*0x1002aed3e*/
  if ( v1 ) /*0x1002aed45*/
  {
    v2 = *a1; /*0x1002aed47*/
    v3 = a1[2]; /*0x1002aed4a*/
    v4 = 0; /*0x1002aed4e*/
    if ( v3 >= *a1 ) /*0x1002aed53*/
      v4 = *a1; /*0x1002aed53*/
    v5 = v3 - v4; /*0x1002aed57*/
    v6 = v1 - (v2 - v5); /*0x1002aed63*/
    if ( v1 <= v2 - v5 ) /*0x1002aed66*/
    {
      v6 = 0; /*0x1002aed6b*/
      v2 = v5 + v1; /*0x1002aed6d*/
    }
  }
  else
  {
    v6 = 0; /*0x1002aed72*/
    v2 = 0; /*0x1002aed74*/
    v5 = 0; /*0x1002aed77*/
  }
  v7 = v2 - v5; /*0x1002aed7d*/
  result = 32 * v5; /*0x1002aed80*/
  v9 = a1[1]; /*0x1002aed84*/
  v10 = result + v9 + 24; /*0x1002aed87*/
  for ( i = v7 + 1; i != 1; --i ) /*0x1002aed8c*/
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v10 - 24) + 32LL))( /*0x1002aeda9*/
               v10,
               *(_QWORD *)(v10 - 16),
               *(_QWORD *)(v10 - 8));
    v10 += 32; /*0x1002aedac*/
  }
  v12 = v9 + 24; /*0x1002aedb4*/
  for ( j = v6 + 1; j != 1; --j ) /*0x1002aedb8*/
  {
    result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)(v12 - 24) + 32LL))( /*0x1002aedd9*/
               v12,
               *(_QWORD *)(v12 - 16),
               *(_QWORD *)(v12 - 8));
    v12 += 32LL; /*0x1002aeddc*/
  }
  return result; /*0x1002aede5*/
}