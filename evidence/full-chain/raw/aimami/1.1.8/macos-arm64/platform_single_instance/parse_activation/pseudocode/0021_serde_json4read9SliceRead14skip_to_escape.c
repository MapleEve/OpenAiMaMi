// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x10105a8f0 depth=4
// serde_json4read9SliceRead14skip_to_escape
unsigned __int64 __fastcall serde_json::read::SliceRead::skip_to_escape::hd549389233ff43ee(_QWORD *a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 result; // rax
  int v3; // edx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r12
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // [rsp+0h] [rbp-30h]

  v1 = a1[1]; /*0x10105a8fe*/
  result = a1[2]; /*0x10105a902*/
  if ( result != v1 ) /*0x10105a909*/
  {
    if ( result >= v1 ) /*0x10105a90f*/
      core::panicking::panic_bounds_check::h56740b1198b22635(a1[2], v1, (__int64)&off_1015ABCB8); /*0x10105aa1e*/
    v3 = *(unsigned __int8 *)(*a1 + result); /*0x10105a918*/
    if ( v3 != 34 && v3 != 92 && (unsigned __int8)v3 > 0x1Fu ) /*0x10105a931*/
    {
      v4 = result + 1; /*0x10105a941*/
      v13 = result + 1; /*0x10105a945*/
      v5 = v1 - (result + 1); /*0x10105a949*/
      v6 = 7 - result; /*0x10105a962*/
      v7 = result + *a1; /*0x10105a965*/
      v8 = 1; /*0x10105a968*/
      while ( v8 - (v5 & 0x7FFFFFFFFFFFFFF8LL) != 1 ) /*0x10105a998*/
      {
        v9 = *(_QWORD *)(v7 + v8); /*0x10105a99a*/
        v4 = v9 - 0x2020202020202020LL; /*0x10105a9b1*/
        v8 += 8; /*0x10105a9ca*/
        v6 -= 8LL; /*0x10105a9ce*/
        if ( ~v9 /*0x10105a9d2*/
           & 0x8080808080808080LL
           & ((v9 - 0x2020202020202020LL)
            | ((v9 ^ 0x2222222222222222LL) - 0x101010101010101LL)
            | ((v9 ^ 0x5C5C5C5C5C5C5C5CLL) - 0x101010101010101LL)) )
        {
          __asm { tzcnt rax, r12 } /*0x10105a9d7*/
          result = ((unsigned int)_RAX >> 3) - v6; /*0x10105a9df*/
          a1[2] = result; /*0x10105a9e2*/
          return result; /*0x10105a9e2*/
        }
      }
      v12 = v13 + (v5 & 0xFFFFFFFFFFFFFFF8LL); /*0x10105a9f9*/
      a1[2] = v12; /*0x10105a9fd*/
      return serde_json::read::SliceRead::skip_to_escape_slow::h7fb85b18cf625499(a1, v12, v4, v7, 0xFEFEFEFEFEFEFEFFLL); /*0x10105aa0f*/
    }
  }
  return result; /*0x10105a9ea*/
}