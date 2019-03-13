/*
 * Eccentricity.cpp
 *
 *  Created on: 19.02.2014
 *      Author: cls
 */

#include "../../include/networkit/distance/Eccentricity.hpp"
#include "../../include/networkit/distance/BFS.hpp"

namespace NetworKit {

std::pair<node, count> Eccentricity::getValue(const Graph& G, node u) {
	count ecc = 0;
	node res;
	G.BFSfrom(u, [&](node v, count dist) {
		ecc = dist;
		res = v;
	});
	return {res, ecc}; // pair.first is argmax node
}


} /* namespace NetworKit */
