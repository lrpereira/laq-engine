/*
 * Copyright (c) 2017 João Afonso. All rights reserved.
 */
#include "laq-statement.hh"

namespace laq {

driver::parsing_tree::statement::statement(
                                  const std::string& op,
                                  const std::string& expr,
                                  const std::vector<std::string>& rvars) {
  operation = op;
  expression = expr;
  rightvars = rvars;
}

}  // namespace laq