/**
 * OptHub REST API
 * OptHubの公開REST APIです。
 *
 * The version of the OpenAPI document: 0.1.0
 * Contact: dev@opthub.ai
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.8.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * SolutionApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_SolutionApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_SolutionApi_H_



#include "opthub_api_client/ApiClient.h"

#include "opthub_api_client/model/CreateSolutionResponse.h"
#include "opthub_api_client/model/Solution.h"
#include <vector>
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  SolutionApi 
{
public:

    explicit SolutionApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~SolutionApi();

    /// <summary>
    /// 解の作成
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="matchId">競技のID</param>
    /// <param name="variable">解空間の変数</param>
    pplx::task<std::shared_ptr<CreateSolutionResponse>> createSolution(
        utility::string_t matchId,
        std::vector<double> variable
    ) const;
    /// <summary>
    /// 解の取得
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="matchId">競技のID</param>
    /// <param name="participantId">参加者のID</param>
    /// <param name="trialNo">試行番号</param>
    pplx::task<std::shared_ptr<Solution>> getSolution(
        utility::string_t matchId,
        utility::string_t participantId,
        int32_t trialNo
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_SolutionApi_H_ */

