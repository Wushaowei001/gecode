/*
 *  Main authors:
 *     Guido Tack <tack@gecode.org>
 *
 *  Copyright:
 *     Guido Tack, 2006
 *
 *  Last modified:
 *     $Date$ by $Author$
 *     $Revision$
 *
 *  This file is part of Gecode, the generic constraint
 *  development environment:
 *     http://www.gecode.org
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef GECODE_GIST_NODE_HH
#define GECODE_GIST_NODE_HH

#include "gecode/support.hh"

namespace Gecode { namespace Gist {

  /// \brief Base class for nodes of the search tree
  class Node {
  protected:
    /// The parent of this node, or NULL for the root
    Node* parent;
    /// The children of this node
    Node** children;
    /// The number of children of this node
    int noOfChildren;
  public:
    /// Default constructor
    Node(void);
    /// Destructor
    ~Node(void);
    
    /// Return the parent
    Node* getParent(void);
    /// Return child no \a n
    Node* getChild(int n);
    
    /// Check if this node is the root of a tree
    bool isRoot(void) const;
    /// Compute the depth of this node
    int getDepth(void) const;
    
    /// Set the number of children to \a n
    void setNumberOfChildren(int n);
    /// Set child number \a n to be \a child
    void setChild(int n, Node* child);

    /// Add new child node
    void addChild(Node* child);

    /// Return the number of children
    int getNumberOfChildren(void) const;
  };

}}

#include "gecode/gist/node.icc"

#endif

// STATISTICS: gist-any
