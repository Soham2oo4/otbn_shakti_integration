// Minimal stub of top_racl_pkg for standalone OTBN builds.
// RACL (Register Access Control List) is not used in standalone mode.

package top_racl_pkg;

  localparam int unsigned RACL_POLICY_SEL_BITS = 1;
  localparam int unsigned RACL_POLICY_BITS     = 16;

  typedef logic [RACL_POLICY_BITS-1:0] racl_policy_t;

  typedef struct packed {
    logic       read_perm;
    logic       write_perm;
  } racl_role_t;

  typedef racl_role_t racl_policy_vec_t;

  parameter racl_policy_t RACL_POLICY_DEFAULT = '0;

endpackage
