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



#include "opthub_api_client/model/Solution.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Solution::Solution()
{
    m_MatchId = utility::conversions::to_string_t("");
    m_MatchIdIsSet = false;
    m_ParticipantIsSet = false;
    m_TrialNo = 0;
    m_TrialNoIsSet = false;
    m_VariableIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
}

Solution::~Solution()
{
}

void Solution::validate()
{
    // TODO: implement validation
}

web::json::value Solution::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MatchIdIsSet)
    {
        val[utility::conversions::to_string_t(U("matchId"))] = ModelBase::toJson(m_MatchId);
    }
    if(m_ParticipantIsSet)
    {
        val[utility::conversions::to_string_t(U("participant"))] = ModelBase::toJson(m_Participant);
    }
    if(m_TrialNoIsSet)
    {
        val[utility::conversions::to_string_t(U("trialNo"))] = ModelBase::toJson(m_TrialNo);
    }
    if(m_VariableIsSet)
    {
        val[utility::conversions::to_string_t(U("variable"))] = ModelBase::toJson(m_Variable);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t(U("userId"))] = ModelBase::toJson(m_UserId);
    }

    return val;
}

bool Solution::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("matchId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("matchId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMatchId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMatchId);
            setMatchId(refVal_setMatchId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("participant"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("participant")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Participant> refVal_setParticipant;
            ok &= ModelBase::fromJson(fieldValue, refVal_setParticipant);
            setParticipant(refVal_setParticipant);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("trialNo"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("trialNo")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTrialNo;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTrialNo);
            setTrialNo(refVal_setTrialNo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("variable"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("variable")));
        if(!fieldValue.is_null())
        {
            std::vector<double> refVal_setVariable;
            ok &= ModelBase::fromJson(fieldValue, refVal_setVariable);
            setVariable(refVal_setVariable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("createdAt"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("createdAt")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedAt);
            setCreatedAt(refVal_setCreatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("userId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("userId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUserId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUserId);
            setUserId(refVal_setUserId);
        }
    }
    return ok;
}

void Solution::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_MatchIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("matchId")), m_MatchId));
    }
    if(m_ParticipantIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("participant")), m_Participant));
    }
    if(m_TrialNoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("trialNo")), m_TrialNo));
    }
    if(m_VariableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("variable")), m_Variable));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("userId")), m_UserId));
    }
}

bool Solution::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("matchId"))))
    {
        utility::string_t refVal_setMatchId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("matchId"))), refVal_setMatchId );
        setMatchId(refVal_setMatchId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("participant"))))
    {
        std::shared_ptr<Participant> refVal_setParticipant;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("participant"))), refVal_setParticipant );
        setParticipant(refVal_setParticipant);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("trialNo"))))
    {
        int32_t refVal_setTrialNo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("trialNo"))), refVal_setTrialNo );
        setTrialNo(refVal_setTrialNo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("variable"))))
    {
        std::vector<double> refVal_setVariable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("variable"))), refVal_setVariable );
        setVariable(refVal_setVariable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("userId"))))
    {
        utility::string_t refVal_setUserId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("userId"))), refVal_setUserId );
        setUserId(refVal_setUserId);
    }
    return ok;
}

utility::string_t Solution::getMatchId() const
{
    return m_MatchId;
}

void Solution::setMatchId(const utility::string_t& value)
{
    m_MatchId = value;
    m_MatchIdIsSet = true;
}

bool Solution::matchIdIsSet() const
{
    return m_MatchIdIsSet;
}

void Solution::unsetMatchId()
{
    m_MatchIdIsSet = false;
}
std::shared_ptr<Participant> Solution::getParticipant() const
{
    return m_Participant;
}

void Solution::setParticipant(const std::shared_ptr<Participant>& value)
{
    m_Participant = value;
    m_ParticipantIsSet = true;
}

bool Solution::participantIsSet() const
{
    return m_ParticipantIsSet;
}

void Solution::unsetParticipant()
{
    m_ParticipantIsSet = false;
}
int32_t Solution::getTrialNo() const
{
    return m_TrialNo;
}

void Solution::setTrialNo(int32_t value)
{
    m_TrialNo = value;
    m_TrialNoIsSet = true;
}

bool Solution::trialNoIsSet() const
{
    return m_TrialNoIsSet;
}

void Solution::unsetTrialNo()
{
    m_TrialNoIsSet = false;
}
std::vector<double>& Solution::getVariable()
{
    return m_Variable;
}

void Solution::setVariable(std::vector<double> value)
{
    m_Variable = value;
    m_VariableIsSet = true;
}

bool Solution::variableIsSet() const
{
    return m_VariableIsSet;
}

void Solution::unsetVariable()
{
    m_VariableIsSet = false;
}
utility::datetime Solution::getCreatedAt() const
{
    return m_CreatedAt;
}

void Solution::setCreatedAt(const utility::datetime& value)
{
    m_CreatedAt = value;
    m_CreatedAtIsSet = true;
}

bool Solution::createdAtIsSet() const
{
    return m_CreatedAtIsSet;
}

void Solution::unsetCreatedAt()
{
    m_CreatedAtIsSet = false;
}
utility::string_t Solution::getUserId() const
{
    return m_UserId;
}

void Solution::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool Solution::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void Solution::unsetUserId()
{
    m_UserIdIsSet = false;
}
}
}
}
}


