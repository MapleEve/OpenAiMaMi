// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND responses_to_sse_payload node 0x1001c5420 depth=2
__int64 __fastcall core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::h481b197510ced185(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD v6[9]; // [rsp+8h] [rbp-48h] BYREF

  v1 = *a1; /*0x1001c5428*/
  if ( *a1 ) /*0x1001c5428*/
  {
    v2 = a1[1]; /*0x1001c5430*/
    v3 = a1[2]; /*0x1001c5434*/
    v6[1] = 0; /*0x1001c5438*/
    v6[2] = v1; /*0x1001c5440*/
    v6[3] = v2; /*0x1001c5444*/
    v6[5] = 0; /*0x1001c5448*/
    v6[6] = v1; /*0x1001c5450*/
    v6[7] = v2; /*0x1001c5454*/
    v4 = 1; /*0x1001c5458*/
  }
  else
  {
    v4 = 0; /*0x1001c545f*/
    v3 = 0; /*0x1001c5461*/
  }
  v6[0] = v4; /*0x1001c5463*/
  v6[4] = v4; /*0x1001c5467*/
  v6[8] = v3; /*0x1001c546b*/
  return core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::h3c9623de037dbf8f((__int64)v6); /*0x1001c5478*/
}