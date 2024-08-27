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



#include "opthub_api_client/model/Participant.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Participant::Participant()
{
    m_ParticipantId = utility::conversions::to_string_t("");
    m_ParticipantIdIsSet = false;
    m_ParticipantTypeIsSet = false;
}

Participant::~Participant()
{
}

void Participant::validate()
{
    // TODO: implement validation
}

web::json::value Participant::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ParticipantIdIsSet)
    {
        val[utility::conversions::to_string_t(U("participantId"))] = ModelBase::toJson(m_ParticipantId);
    }
    if(m_ParticipantTypeIsSet)
    {
        val[utility::conversions::to_string_t(U("participantType"))] = ModelBase::toJson(m_ParticipantType);
    }

    return val;
}

bool Participant::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("participantId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("participantId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setParticipantId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setParticipantId);
            setParticipantId(refVal_setParticipantId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("participantType"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("participantType")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ParticipantType> refVal_setParticipantType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setParticipantType);
            setParticipantType(refVal_setParticipantType);
        }
    }
    return ok;
}

void Participant::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_ParticipantIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("participantId")), m_ParticipantId));
    }
    if(m_ParticipantTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("participantType")), m_ParticipantType));
    }
}

bool Participant::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("participantId"))))
    {
        utility::string_t refVal_setParticipantId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("participantId"))), refVal_setParticipantId );
        setParticipantId(refVal_setParticipantId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("participantType"))))
    {
        std::shared_ptr<ParticipantType> refVal_setParticipantType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("participantType"))), refVal_setParticipantType );
        setParticipantType(refVal_setParticipantType);
    }
    return ok;
}

utility::string_t Participant::getParticipantId() const
{
    return m_ParticipantId;
}

void Participant::setParticipantId(const utility::string_t& value)
{
    m_ParticipantId = value;
    m_ParticipantIdIsSet = true;
}

bool Participant::participantIdIsSet() const
{
    return m_ParticipantIdIsSet;
}

void Participant::unsetParticipantId()
{
    m_ParticipantIdIsSet = false;
}
std::shared_ptr<ParticipantType> Participant::getParticipantType() const
{
    return m_ParticipantType;
}

void Participant::setParticipantType(const std::shared_ptr<ParticipantType>& value)
{
    m_ParticipantType = value;
    m_ParticipantTypeIsSet = true;
}

bool Participant::participantTypeIsSet() const
{
    return m_ParticipantTypeIsSet;
}

void Participant::unsetParticipantType()
{
    m_ParticipantTypeIsSet = false;
}
}
}
}
}


