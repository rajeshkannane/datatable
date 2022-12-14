//------------------------------------------------------------------------------
// Copyright 2019 H2O.ai
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//------------------------------------------------------------------------------
#ifndef dt_UTILS_TERMINAL_TERMINAL_STREAM_h
#define dt_UTILS_TERMINAL_TERMINAL_STREAM_h
#include <stack>
#include <string>
#include <sstream>
#include "utils/assert.h"
#include "utils/terminal/terminal_style.h"
#include "utils/tests.h"  // compatibility with C++ tests
namespace dt {


class tstring;


class TerminalStream {
  private:
    std::ostringstream out_;
    std::stack<TerminalStyle> stack_;
    TerminalStyle current_;
    bool use_colors_;
    size_t : 56;


  public:
    TerminalStream(bool use_colors);

    template <typename T>
    TerminalStream& operator<<(const T& value) {
      _emit_pending_styles();
      out_ << value;
      return *this;
    }

    std::string str();

  private:
    void _emit_pending_styles();

};

template <> TerminalStream& TerminalStream::operator<<(const tstring&);
template <> TerminalStream& TerminalStream::operator<<(const TerminalStyle&);


}  // namespace dt
#endif
