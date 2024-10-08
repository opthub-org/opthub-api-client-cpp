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
 * CreateMatchTrial_404_response.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CreateMatchTrial_404_response_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CreateMatchTrial_404_response_H_


#include "opthub_api_client/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  CreateMatchTrial_404_response
    : public ModelBase
{
public:
    CreateMatchTrial_404_response();
    virtual ~CreateMatchTrial_404_response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateMatchTrial_404_response members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCode() const;
    bool codeIsSet() const;
    void unsetCode();

    void setCode(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();

    void setMessage(const utility::string_t& value);


protected:
    utility::string_t m_Code;
    bool m_CodeIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CreateMatchTrial_404_response_H_ */
