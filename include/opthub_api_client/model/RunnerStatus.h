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
 * RunnerStatus.h
 *
 * Status of the Trial
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_RunnerStatus_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_RunnerStatus_H_


#include "opthub_api_client/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


class  RunnerStatus
    : public ModelBase
{
public:
    RunnerStatus();
    virtual ~RunnerStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eRunnerStatus
    {
        RunnerStatus_SUCCESS,
        RunnerStatus_FAILED,
    };

    eRunnerStatus getValue() const;
    void setValue(eRunnerStatus const value);

    protected:
        eRunnerStatus m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_RunnerStatus_H_ */
