// Minimal stub of lc_ctrl_pkg for standalone OTBN builds.
// Replace with the real package if available.

package lc_ctrl_pkg;

  localparam int TxWidth = 4;

  typedef enum logic [3:0] {
    On  = 4'b1010,
    Off = 4'b0101
  } lc_tx_t;

  typedef lc_tx_t lc_tx_e;

  parameter lc_tx_t LC_TX_DEFAULT = Off;

endpackage
