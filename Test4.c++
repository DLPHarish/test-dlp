Noncompliant example
def create_session_noncompliant():
    import boto3
    # Noncompliant: uses hardcoded secret access key.
    sample_key = "AjWnyxxxxx45xxxxZxxxX7ZQxxxxYxxx1xYxxxxx"
    boto3.session.Session(aws_secret_access_key=sample_key)


Compliant example
def create_session_compliant():
    import boto3
    import os
    # Compliant: uses environment variable for secret access key.
    sample_key = os.environ.get("AWS_SECRET_ACCESS_KEY")
    boto3.session.Session(aws_secret_access_key=sample_key)