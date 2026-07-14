// mac 1.1.8 BEHAVIORAL-BACKEND activation_request_path node 0x10112a250 depth=4
// std3sys4sync6rwlock5queue6RwLock21read_unlock_contended
unsigned __int64 __fastcall std::sys::sync::rwlock::queue::RwLock::read_unlock_contended::hf5a509ae31aa9ac3(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 result; // rax
  volatile signed __int64 *v3; // rcx
  __int64 *v4; // rdx
  __int64 v5; // r8

  result = a2 & 0xFFFFFFFFFFFFFFF0LL; /*0x10112a257*/
  v3 = *(volatile signed __int64 **)((a2 & 0xFFFFFFFFFFFFFFF0LL) + 0x10); /*0x10112a25b*/
  if ( !v3 ) /*0x10112a262*/
  {
    v4 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL); /*0x10112a264*/
    do /*0x10112a281*/
    {
      v5 = *v4; /*0x10112a270*/
      *(_QWORD *)(v5 + 8) = v4; /*0x10112a273*/
      v3 = *(volatile signed __int64 **)(v5 + 16); /*0x10112a277*/
      v4 = (__int64 *)v5; /*0x10112a27b*/
    }
    while ( !v3 ); /*0x10112a281*/
  }
  *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0LL) + 0x10) = v3; /*0x10112a283*/
  if ( !_InterlockedSub64(v3, 0x10u) ) /*0x10112a287*/
    return std::sys::sync::rwlock::queue::RwLock::unlock_contended::h1eb4e9bf83e339e8(); /*0x10112a291*/
  return result; /*0x10112a28e*/
}