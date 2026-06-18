export type McpCachePayloadSource = "full-refresh" | "mutation-payload";

let mcpCacheSequence = 0;
let mcpLatestAcceptedSequence = 0;
let mcpMutationFenceSequence = 0;

export function nextMcpCacheSequence() {
  mcpCacheSequence += 1;
  return mcpCacheSequence;
}

export function beginMcpMutationSequence() {
  const sequence = nextMcpCacheSequence();
  mcpMutationFenceSequence = Math.max(mcpMutationFenceSequence, sequence);
  return sequence;
}

export function acceptMcpCacheSequence(
  source: McpCachePayloadSource,
  sequence: number,
) {
  if (source !== "mutation-payload" && sequence < mcpMutationFenceSequence) {
    return false;
  }
  if (sequence < mcpLatestAcceptedSequence) {
    return false;
  }

  mcpLatestAcceptedSequence = sequence;
  return true;
}
