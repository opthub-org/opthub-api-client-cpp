/**
 * OptHub REST API
 * OptHub Public REST API.
 *
 * The version of the OpenAPI document: 0.1.0
 * Contact: dev@opthub.ai
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.8.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CreateSolutionResponse.h
 *
 * Information of the created solution
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CreateSolutionResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CreateSolutionResponse_H_


#include "opthub_api_client/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// Information of the created solution
/// </summary>
class  CreateSolutionResponse
    : public ModelBase
{
public:
    CreateSolutionResponse();
    virtual ~CreateSolutionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateSolutionResponse members

    /// <summary>
    /// Participant ID
    /// </summary>
    utility::string_t getParticipantId() const;
    bool participantIdIsSet() const;
    void unsetParticipantId();

    void setParticipantId(const utility::string_t& value);

    /// <summary>
    /// Trial number
    /// </summary>
    int32_t getTrialNo() const;
    bool trialNoIsSet() const;
    void unsetTrialNo();

    void setTrialNo(int32_t value);


protected:
    utility::string_t m_ParticipantId;
    bool m_ParticipantIdIsSet;
    int32_t m_TrialNo;
    bool m_TrialNoIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CreateSolutionResponse_H_ */
