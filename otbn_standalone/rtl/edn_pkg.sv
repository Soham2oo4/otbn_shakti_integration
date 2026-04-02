// Minimal stub of edn_pkg for standalone OTBN builds.

package edn_pkg;

  localparam int unsigned ENDPOINT_BUS_WIDTH = 32;

  typedef struct packed {
    logic                           edn_req;
  } edn_req_t;

  typedef struct packed {
    logic                           edn_ack;
    logic                           edn_fips;
    logic [ENDPOINT_BUS_WIDTH-1:0]  edn_bus;
  } edn_rsp_t;

  parameter edn_req_t EDN_REQ_DEFAULT = '{edn_req: 1'b0};
  parameter edn_rsp_t EDN_RSP_DEFAULT = '{edn_ack: 1'b0, edn_fips: 1'b0, edn_bus: '0};

endpackage
