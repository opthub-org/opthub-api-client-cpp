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
 * Solution.h
 *
 * 解
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Solution_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Solution_H_


#include "opthub_api_client/ModelBase.h"

#include "opthub_api_client/model/Participant.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Participant;


/// <summary>
/// 解
/// </summary>
class  Solution
    : public ModelBase
{
public:
    Solution();
    virtual ~Solution();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Solution members

    /// <summary>
    /// Match ID
    /// </summary>
    utility::string_t getMatchId() const;
    bool matchIdIsSet() const;
    void unsetMatchId();

    void setMatchId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Participant> getParticipant() const;
    bool participantIsSet() const;
    void unsetParticipant();

    void setParticipant(const std::shared_ptr<Participant>& value);

    /// <summary>
    /// Trial number
    /// </summary>
    int32_t getTrialNo() const;
    bool trialNoIsSet() const;
    void unsetTrialNo();

    void setTrialNo(int32_t value);

    /// <summary>
    /// Solution space variable
    /// </summary>
    std::vector<double>& getVariable();
    bool variableIsSet() const;
    void unsetVariable();

    void setVariable(std::vector<double> value);

    /// <summary>
    /// Creation date and time
    /// </summary>
    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// ID of the user who created it
    /// </summary>
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUserId();

    void setUserId(const utility::string_t& value);


protected:
    utility::string_t m_MatchId;
    bool m_MatchIdIsSet;
    std::shared_ptr<Participant> m_Participant;
    bool m_ParticipantIsSet;
    int32_t m_TrialNo;
    bool m_TrialNoIsSet;
    std::vector<double> m_Variable;
    bool m_VariableIsSet;
    utility::datetime m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::string_t m_UserId;
    bool m_UserIdIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Solution_H_ */
