import whisper
import streamlit as st

st.title("Transcribe.AI")
audio_file = st.file_uploader("Upload Audio File",type=['wav','mp3','m4a'])

def load_whisper():
  st.sidebar.error("Please Wait Loading Model")
  model = whisper.load_model("base")
  st.sidebar.success("Loaded Model")
  return model

model = load_whisper()

if st.sidebar.button("Transribe Audio"):
  if audio_file is not None:
    st.sidebar.success("Transcribing")
    transcription = model.transcribe(audio_file)
    st.sidebar.success("Transcribed!")
    st.text(transcription["text"])
  else:
    st.sidebar.error("Please upload an audio file")