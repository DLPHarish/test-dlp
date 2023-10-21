private static final String AWS_ACCESS_KEY_ID = "AKXXXXXXXXXXXXXXXXXXX";
private static final String AWS_SECRET_ACCESS_KEY = "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY";

private static AmazonS3Client createClient()
{
           BasicAWSCredentials credentials = new BasicAWSCredentials(AWS_ACCESS_KEY_ID, AWS_SECRET_ACCESS_KEY);
           AmazonS3Client s3Client = new AmazonS3Client(credentials);
           return s3Client;
}


{
  "Version": "2012-10-17",
  "Statement": [
    {
      "Action": [
        "s3:GetObject"
      ],
      "Sid": "Stmt0123456789",

      "Resource": [
        "arn:aws:s3:::<your S3 bucket name>/xyz.properties"
      ],
      "Effect": "Allow"
    }
  ]
}