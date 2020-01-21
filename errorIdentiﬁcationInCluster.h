//
// Created by  Elon Grubman on 21/01/2020.
//

#ifndef CLUSTERING_CORRECTING_CODES_ERRORIDENTIFICATIONINCLUSTER_H
#define CLUSTERING_CORRECTING_CODES_ERRORIDENTIFICATIONINCLUSTER_H


#include "simulator.h"


class errorIdentiﬁcationInCluster {
    unordered_map<int, vector<encoded_strand_binary>> map;
    string assumption;
    int tao;
    int ro;
public:
    errorIdentiﬁcationInCluster(int e, int t, unordered_map<int,encoded_strand_binary>& _map, string _assumption) : assumption(std::move(_assumption)){
        simulator s(e, t, map, _map, assumption);
        tao = s.getTao();
        ro = s.getRo();
        map = s.getMap();
    }

    unordered_map<int, &getMap()  {
        return map;
    }

    void setMap(const unordered_map<int, &map) {
        this->map = map;
    }

    string &getAssumption()  {
        return assumption;
    }

    int getTao()  {
        return tao;
    }

    void setTao(int tao) {
        this->tao = tao;
    }

    int getRo()  {
        return ro;
    }

    void setRo(int ro) {
        this->ro = ro;
    }
};


#endif //CLUSTERING_CORRECTING_CODES_ERRORIDENTIFICATIONINCLUSTER_H
