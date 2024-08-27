/**
 * OptHub REST API
 * OptHub Public REST API.
 *
 * The version of the OpenAPI document: 0.1.1
 * Contact: dev@opthub.ai
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.8.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "opthub_api_client/ApiException.h"

namespace org {
namespace openapitools {
namespace client {
namespace api {

ApiException::ApiException( int errorCode
    , const utility::string_t& message
    , std::shared_ptr<std::istream> content /*= nullptr*/ )
    : web::http::http_exception( errorCode, message )
    , m_Content(content)
{
}
ApiException::ApiException( int errorCode
    , const utility::string_t& message
    , std::map<utility::string_t, utility::string_t>& headers
    , std::shared_ptr<std::istream> content /*= nullptr*/ )
    : web::http::http_exception( errorCode, message )
    , m_Content(content)
    , m_Headers(headers)
{
}

ApiException::~ApiException()
{
}

std::shared_ptr<std::istream> ApiException::getContent() const
{
    return m_Content;
}

std::map<utility::string_t, utility::string_t>& ApiException::getHeaders()
{
    return m_Headers;
}

}
}
}
}
