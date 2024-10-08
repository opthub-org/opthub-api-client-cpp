/**
 * OptHub REST API
 * OptHub Public REST API.
 *
 * The version of the OpenAPI document: 0.3.0
 * Contact: dev@opthub.ai
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.8.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * MatchTrialsApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_MatchTrialsApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_MatchTrialsApi_H_



#include "opthub_api_client/ApiClient.h"

#include "opthub_api_client/model/AuthErrorResponse.h"
#include "opthub_api_client/model/CreateMatchTrial_400_response.h"
#include "opthub_api_client/model/CreateMatchTrial_403_response.h"
#include "opthub_api_client/model/CreateMatchTrial_404_response.h"
#include "opthub_api_client/model/CreateMatchTrial_request.h"
#include "opthub_api_client/model/GetMatchEvaluation_404_response.h"
#include "opthub_api_client/model/GetMatchScore_404_response.h"
#include "opthub_api_client/model/GetMatchTrial_403_response.h"
#include "opthub_api_client/model/GetMatchTrial_404_response.h"
#include "opthub_api_client/model/GetSolution_404_response.h"
#include "opthub_api_client/model/MatchTrialEvaluation.h"
#include "opthub_api_client/model/MatchTrialResponse.h"
#include "opthub_api_client/model/MatchTrialScore.h"
#include "opthub_api_client/model/ServerErrorResponse.h"
#include "opthub_api_client/model/Solution.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  MatchTrialsApi 
{
public:

    explicit MatchTrialsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~MatchTrialsApi();

    /// <summary>
    /// Create a match trial
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="matchUuid">Match UUID</param>
    /// <param name="createMatchTrialRequest"> (optional)</param>
    pplx::task<std::shared_ptr<MatchTrialResponse>> createMatchTrial(
        utility::string_t matchUuid,
        boost::optional<std::shared_ptr<CreateMatchTrial_request>> createMatchTrialRequest
    ) const;
    /// <summary>
    /// Retrieve status of a specific match evaluation related to the Solution submitted by the Participant themselves.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="matchUuid">Match UUID</param>
    /// <param name="trialNo">Trial number</param>
    pplx::task<std::shared_ptr<MatchTrialEvaluation>> getMatchEvaluation(
        utility::string_t matchUuid,
        int32_t trialNo
    ) const;
    /// <summary>
    /// Retrieve status of a specific match score related to the Solution submitted by the Participant themselves.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="matchUuid">Match UUID</param>
    /// <param name="trialNo">Trial number</param>
    pplx::task<std::shared_ptr<MatchTrialScore>> getMatchScore(
        utility::string_t matchUuid,
        int32_t trialNo
    ) const;
    /// <summary>
    /// Retrieve status of a specific Match Trial related to the Solution submitted by the Participant themselves.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="matchUuid">Match UUID</param>
    /// <param name="trialNo">Trial number</param>
    pplx::task<std::shared_ptr<MatchTrialResponse>> getMatchTrial(
        utility::string_t matchUuid,
        int32_t trialNo
    ) const;
    /// <summary>
    /// Retrieve the Solution submitted by the Participant themselves.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="matchUuid">Match UUID</param>
    /// <param name="trialNo">Trial number</param>
    pplx::task<std::shared_ptr<Solution>> getSolution(
        utility::string_t matchUuid,
        int32_t trialNo
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_MatchTrialsApi_H_ */

