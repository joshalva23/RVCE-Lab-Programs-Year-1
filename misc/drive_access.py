from google.oauth2.credentials import Credentials
from googleapiclient.discovery import build,MediaFileUpload
creds = Credentials.from_authorized_user_info(info=client_secrets)
service = build('drive', 'v3', credentials=creds)
file_metadata = {'name': 'example.txt'}
media = MediaFileUpload('example.txt', mimetype='text/plain')
file = service.files().create(body=file_metadata, media_body=media, fields='id').execute()
print(F'File ID: {file.get("id")}')