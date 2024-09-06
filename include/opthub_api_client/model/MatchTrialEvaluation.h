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
 * MatchTrialEvaluation.h
 *
 * Evaluation results
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_MatchTrialEvaluation_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_MatchTrialEvaluation_H_


#include "opthub_api_client/ModelBase.h"

#include "opthub_api_client/Object.h"
#include "opthub_api_client/model/ScalarOrVector.h"
#include "opthub_api_client/model/RunnerStatus.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class ScalarOrVector;


/// <summary>
/// Evaluation results
/// </summary>
class  MatchTrialEvaluation
    : public ModelBase
{
public:
    MatchTrialEvaluation();
    virtual ~MatchTrialEvaluation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MatchTrialEvaluation members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RunnerStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const std::shared_ptr<RunnerStatus>& value);

    /// <summary>
    /// Evaluation error information
    /// </summary>
    utility::string_t getError() const;
    bool errorIsSet() const;
    void unsetError();

    void setError(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ScalarOrVector> getObjective() const;
    bool objectiveIsSet() const;
    void unsetObjective();

    void setObjective(const std::shared_ptr<ScalarOrVector>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ScalarOrVector> getConstraint() const;
    bool constraintIsSet() const;
    void unsetConstraint();

    void setConstraint(const std::shared_ptr<ScalarOrVector>& value);

    /// <summary>
    /// Auxiliary information for evaluation
    /// </summary>
    std::shared_ptr<Object> getInfo() const;
    bool infoIsSet() const;
    void unsetInfo();

    void setInfo(const std::shared_ptr<Object>& value);

    /// <summary>
    /// Whether it is a feasible solution
    /// </summary>
    bool isFeasible() const;
    bool feasibleIsSet() const;
    void unsetFeasible();

    void setFeasible(bool value);

    /// <summary>
    /// Evaluation start date and time
    /// </summary>
    utility::datetime getStartedAt() const;
    bool startedAtIsSet() const;
    void unsetStartedAt();

    void setStartedAt(const utility::datetime& value);

    /// <summary>
    /// Evaluation end date and time
    /// </summary>
    utility::datetime getFinishedAt() const;
    bool finishedAtIsSet() const;
    void unsetFinishedAt();

    void setFinishedAt(const utility::datetime& value);


protected:
    std::shared_ptr<RunnerStatus> m_Status;
    bool m_StatusIsSet;
    utility::string_t m_Error;
    bool m_ErrorIsSet;
    std::shared_ptr<ScalarOrVector> m_Objective;
    bool m_ObjectiveIsSet;
    std::shared_ptr<ScalarOrVector> m_Constraint;
    bool m_ConstraintIsSet;
    std::shared_ptr<Object> m_Info;
    bool m_InfoIsSet;
    bool m_Feasible;
    bool m_FeasibleIsSet;
    utility::datetime m_StartedAt;
    bool m_StartedAtIsSet;
    utility::datetime m_FinishedAt;
    bool m_FinishedAtIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_MatchTrialEvaluation_H_ */
