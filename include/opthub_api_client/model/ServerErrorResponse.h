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
 * ServerErrorResponse.h
 *
 * Internal server error response
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ServerErrorResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ServerErrorResponse_H_


#include "opthub_api_client/ModelBase.h"

#include "opthub_api_client/model/ServerErrorCode.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// Internal server error response
/// </summary>
class  ServerErrorResponse
    : public ModelBase
{
public:
    ServerErrorResponse();
    virtual ~ServerErrorResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ServerErrorResponse members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ServerErrorCode> getCode() const;
    bool codeIsSet() const;
    void unsetCode();

    void setCode(const std::shared_ptr<ServerErrorCode>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();

    void setMessage(const utility::string_t& value);


protected:
    std::shared_ptr<ServerErrorCode> m_Code;
    bool m_CodeIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ServerErrorResponse_H_ */
