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



#include "opthub_api_client/model/Solution.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Solution::Solution()
{
    m_VariableIsSet = false;
    m_CreatedAt = utility::datetime();
    m_CreatedAtIsSet = false;
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
    
    if(m_VariableIsSet)
    {
        val[utility::conversions::to_string_t(U("variable"))] = ModelBase::toJson(m_Variable);
    }
    if(m_CreatedAtIsSet)
    {
        val[utility::conversions::to_string_t(U("createdAt"))] = ModelBase::toJson(m_CreatedAt);
    }

    return val;
}

bool Solution::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("variable"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("variable")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ScalarOrVector> refVal_setVariable;
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
    return ok;
}

void Solution::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_VariableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("variable")), m_Variable));
    }
    if(m_CreatedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("createdAt")), m_CreatedAt));
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

    if(multipart->hasContent(utility::conversions::to_string_t(U("variable"))))
    {
        std::shared_ptr<ScalarOrVector> refVal_setVariable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("variable"))), refVal_setVariable );
        setVariable(refVal_setVariable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("createdAt"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("createdAt"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    return ok;
}

std::shared_ptr<ScalarOrVector> Solution::getVariable() const
{
    return m_Variable;
}

void Solution::setVariable(const std::shared_ptr<ScalarOrVector>& value)
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
}
}
}
}


